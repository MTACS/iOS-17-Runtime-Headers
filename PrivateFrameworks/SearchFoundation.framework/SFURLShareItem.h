
@interface SFURLShareItem : SFShareItem <NSCopying, NSSecureCoding, SFURLShareItem> {
    NSURL * _urlValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *urlValue;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setUrlValue:(id)arg1;
- (id)urlValue;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)searchUI_fetchShareableItemWithCompletionHandler:(id /* block */)arg1;

@end
