
@interface DockKitCore.FollowerMetadata : NSObject <NSSecureCoding> {
    void intrinsics;
    void observations;
    void orientation;
    void portType;
    void referenceHeight;
    void referenceWidth;
    void timestamp;
}

@property (nonatomic, retain) NSArray *intrinsics;
@property (nonatomic, copy) NSArray *observations;
@property (nonatomic) int orientation;
@property (nonatomic, retain) NSString *portType;
@property (nonatomic) float referenceHeight;
@property (nonatomic) float referenceWidth;
@property (nonatomic) double timestamp;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intrinsics;
- (id)observations;
- (int)orientation;
- (id)portType;
- (float)referenceHeight;
- (float)referenceWidth;
- (void)setIntrinsics:(id)arg1;
- (void)setObservations:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setPortType:(id)arg1;
- (void)setReferenceHeight:(float)arg1;
- (void)setReferenceWidth:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
