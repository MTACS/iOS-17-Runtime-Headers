
@interface CLSEKCalendar : NSObject <NSCoding> {
    NSString * _calendarIdentifier;
    bool  _hasSharees;
    NSSet * _shareesAndOwner;
}

@property (readonly) NSString *calendarIdentifier;
@property (readonly) bool hasSharees;
@property (readonly) NSSet *shareesAndOwner;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSharees;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKCalendar:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)shareesAndOwner;

@end
