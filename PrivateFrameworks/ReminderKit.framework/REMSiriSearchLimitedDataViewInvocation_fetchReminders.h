
@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding> {
    NSNumber * _completed;
    NSDate * _dueAfter;
    NSDate * _dueBefore;
    NSNumber * _hasLocation;
    NSString * _location;
    NSString * _title;
}

@property (nonatomic, readonly) NSNumber *completed;
@property (nonatomic, readonly) NSDate *dueAfter;
@property (nonatomic, readonly) NSDate *dueBefore;
@property (nonatomic, readonly) NSNumber *hasLocation;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dueAfter;
- (id)dueBefore;
- (void)encodeWithCoder:(id)arg1;
- (id)hasLocation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)title;

@end
