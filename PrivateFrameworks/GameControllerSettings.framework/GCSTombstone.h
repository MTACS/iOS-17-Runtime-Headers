
@interface GCSTombstone : NSObject <GCSJSONSerializable, NSSecureCoding> {
    NSDate * _creationDate;
    NSString * _identifier;
    long long  _recordType;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) long long recordType;

+ (id)archivalClasses;
+ (bool)supportsSecureCoding;
+ (double)timeToLiveSeconds;

- (void).cxx_destruct;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 creationDate:(id)arg2 recordType:(long long)arg3;
- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;
- (long long)recordType;

@end
