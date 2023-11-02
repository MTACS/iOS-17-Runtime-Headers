
@interface CDRecentServiceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _serviceInfo;
    struct { 
        struct { 
            double timestamp; 
            unsigned long long amount; 
        } urgencies[4]; 
        unsigned long long non_purgeable_amount; 
        unsigned char data[0]; 
    }  recentinfo;
}

@property (nonatomic, retain) NSDictionary *serviceInfo;

+ (id)CDRecentServiceInfo:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4 info:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amountAtUrgency:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4 info:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (bool)isEmpty;
- (void)log;
- (id)nonPurgeableAmount;
- (id)serialize;
- (id)serviceInfo;
- (void)setServiceInfo:(id)arg1;
- (bool)updateAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4 deductFromCurrentAmount:(bool)arg5 info:(id)arg6;
- (void)updateInfo:(id)arg1;
- (bool)validate:(double)arg1 atUrgency:(int)arg2;

@end
