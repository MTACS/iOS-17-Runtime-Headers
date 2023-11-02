
@interface RPRSDDeviceInfo_Internal : NSObject {
    void name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)uuid;

@end
