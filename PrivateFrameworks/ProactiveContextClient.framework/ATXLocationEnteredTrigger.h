
@interface ATXLocationEnteredTrigger : NSObject <ATXTrigger> {
    NSString * _locationIdentifier;
    unsigned long long  _namedLOI;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *locationIdentifier;
@property (nonatomic, readonly) unsigned long long namedLOI;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationIdentifier:(id)arg1 namedLOI:(unsigned long long)arg2;
- (id)locationIdentifier;
- (unsigned long long)namedLOI;
- (long long)type;

@end
