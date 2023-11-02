
@interface PKDetectionQueryItem : NSObject

@property (nonatomic, readonly) UIBezierPath *baselinePath;
@property (nonatomic, readonly) NSSet *strokeIdentifiers;

- (id)baselinePath;
- (id)strokeIdentifiers;

@end
