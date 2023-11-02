
@interface ATXEngagementRecordEntry : NSObject <NSSecureCoding> {
    NSDate * _dateEngaged;
    unsigned long long  _engagementRecordType;
    ATXExecutableIdentifier * _executable;
}

@property (nonatomic, readonly) NSDate *dateEngaged;
@property (nonatomic, readonly) unsigned long long engagementRecordType;
@property (nonatomic, readonly) ATXExecutableIdentifier *executable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateEngaged;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)engagementRecordType;
- (id)executable;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecutable:(id)arg1 dateEngaged:(id)arg2 engagementRecordType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDict;

@end
