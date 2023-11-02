
@interface EDAMNoteEmailParameters : FATObject {
    NSArray * _ccAddresses;
    NSString * _guid;
    NSString * _message;
    EDAMNote * _note;
    NSString * _subject;
    NSArray * _toAddresses;
}

@property (nonatomic, retain) NSArray *ccAddresses;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) EDAMNote *note;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSArray *toAddresses;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)ccAddresses;
- (id)guid;
- (id)message;
- (id)note;
- (void)setCcAddresses:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToAddresses:(id)arg1;
- (id)subject;
- (id)toAddresses;

@end
