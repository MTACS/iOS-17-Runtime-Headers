
@interface PSIDate : NSObject {
    long long  _int64Representation;
    long long  _int64RepresentationMask;
}

@property (readonly) long long day;
@property (readonly) long long era;
@property (readonly) long long int64Representation;
@property (readonly) long long int64RepresentationMask;
@property (readonly) long long month;
@property (readonly) long long year;

+ (id)distantFuture;
+ (id)distantPast;

- (id)dateComponents;
- (long long)day;
- (id)description;
- (long long)era;
- (unsigned long long)hash;
- (id)initWithDateComponents:(id)arg1;
- (id)initWithInt64Representation:(long long)arg1;
- (id)initWithUniversalDate:(id)arg1 calendar:(id)arg2;
- (long long)int64Representation;
- (long long)int64RepresentationMask;
- (bool)isEqual:(id)arg1;
- (long long)month;
- (long long)year;

@end
