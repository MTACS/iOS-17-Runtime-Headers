
@interface HDMHNotification : NSObject <NSCopying> {
    NSString * _category;
    NSDateComponents * _dateComponents;
    long long  _fireOnDayIndex;
}

@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly) NSDateComponents *dateComponents;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponents;
- (id)description;
- (id)eventIdentifier;
- (id)initWithFireOnDayIndex:(long long)arg1 dateComponents:(id)arg2 category:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
