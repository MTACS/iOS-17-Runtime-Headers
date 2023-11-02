
@interface HMFConnectivityInfo : HMFObject <NSSecureCoding> {
    NSString * _accessoryIdentifier;
    HMFWoBLEInfo * _woBLEInfo;
    NSArray * _woWLANInfos;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, retain) HMFWoBLEInfo *woBLEInfo;
@property (nonatomic, readonly) HMFWoWLANInfo *woWLANInfo;
@property (nonatomic, retain) NSArray *woWLANInfos;

+ (id)connectivityInfoWithAccessoryIdentifier:(id)arg1 wakeConfiguration:(id)arg2;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessoryIdentifier:(id)arg1 woBLEInfo:(id)arg2 woWLANInfos:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setWoBLEInfo:(id)arg1;
- (void)setWoWLANInfos:(id)arg1;
- (id)woBLEInfo;
- (id)woWLANInfo;
- (id)woWLANInfos;

@end
