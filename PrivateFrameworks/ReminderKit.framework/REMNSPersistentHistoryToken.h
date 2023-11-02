
@interface REMNSPersistentHistoryToken : REMChangeToken {
    NSPersistentHistoryToken * _token;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareToken:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryToken:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)token;

@end
