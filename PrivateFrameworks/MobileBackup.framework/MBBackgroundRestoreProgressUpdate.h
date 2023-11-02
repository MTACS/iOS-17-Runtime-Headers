
@interface MBBackgroundRestoreProgressUpdate : NSObject <NSSecureCoding> {
    unsigned long long  _estimatedSize;
    bool  _hasCellularPolicy;
    bool  _isOnInexpensiveCellular;
    bool  _isOnWiFi;
    bool  _isThermallyThrottled;
}

@property (nonatomic) unsigned long long estimatedSize;
@property (nonatomic) bool hasCellularPolicy;
@property (nonatomic) bool isOnInexpensiveCellular;
@property (nonatomic) bool isOnWiFi;
@property (nonatomic) bool isThermallyThrottled;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedSize;
- (bool)hasCellularPolicy;
- (id)initWithCoder:(id)arg1;
- (bool)isOnInexpensiveCellular;
- (bool)isOnWiFi;
- (bool)isThermallyThrottled;
- (void)setEstimatedSize:(unsigned long long)arg1;
- (void)setHasCellularPolicy:(bool)arg1;
- (void)setIsOnInexpensiveCellular:(bool)arg1;
- (void)setIsOnWiFi:(bool)arg1;
- (void)setIsThermallyThrottled:(bool)arg1;

@end
