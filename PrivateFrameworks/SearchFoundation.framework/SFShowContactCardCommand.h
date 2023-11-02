
@interface SFShowContactCardCommand : SFCommand <NSCopying, NSSecureCoding, SFShowContactCardCommand> {
    NSString * _contactIdentifier;
    struct { 
        unsigned int isSuggestedContact : 1; 
    }  _has;
    bool  _isSuggestedContact;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSuggestedContact;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsSuggestedContact;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSuggestedContact;
- (id)jsonData;
- (void)setContactIdentifier:(id)arg1;
- (void)setIsSuggestedContact:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;

@end
