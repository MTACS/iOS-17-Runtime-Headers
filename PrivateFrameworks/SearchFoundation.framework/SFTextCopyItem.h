
@interface SFTextCopyItem : SFCopyItem <NSCopying, NSSecureCoding, SFTextCopyItem> {
    NSString * _copyableString;
}

@property (nonatomic, copy) NSString *copyableString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyableString;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setCopyableString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)searchUI_copyItemToPasteboard;

@end
