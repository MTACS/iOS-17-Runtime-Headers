
@interface SFCreateContactCommand : SFCommand <NSCopying, NSSecureCoding, SFCreateContactCommand> {
    bool  _addToExistingContact;
    struct { 
        unsigned int addToExistingContact : 1; 
    }  _has;
    SFPerson * _person;
}

@property (nonatomic) bool addToExistingContact;
@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic, retain) SFPerson *person;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addToExistingContact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAddToExistingContact;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)person;
- (void)setAddToExistingContact:(bool)arg1;
- (void)setPerson:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;

@end
