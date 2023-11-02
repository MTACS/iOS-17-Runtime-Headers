
@interface AXAuditPSN : NSObject {
    struct ProcessSerialNumber { 
        unsigned int highLongOfPSN; 
        unsigned int lowLongOfPSN; 
    }  _psn;
}

@property (nonatomic) struct ProcessSerialNumber { unsigned int x1; unsigned int x2; } psn;

+ (id)createWithPSN:(struct ProcessSerialNumber { unsigned int x1; unsigned int x2; })arg1;
+ (void)registerTransportableObjectWithManager:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct ProcessSerialNumber { unsigned int x1; unsigned int x2; })psn;
- (void)setPsn:(struct ProcessSerialNumber { unsigned int x1; unsigned int x2; })arg1;

@end
