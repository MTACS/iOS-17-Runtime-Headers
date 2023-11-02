
@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding> {
    NSString * _contactID;
    unsigned int  _flags;
    NSArray * _handles;
    NSString * _sendersKnownAlias;
}

@property (nonatomic, copy) NSString *contactID;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) NSArray *handles;
@property (nonatomic, copy) NSString *sendersKnownAlias;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)handles;
- (id)initWithCoder:(id)arg1;
- (id)sendersKnownAlias;
- (void)setContactID:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHandles:(id)arg1;
- (void)setSendersKnownAlias:(id)arg1;

@end
