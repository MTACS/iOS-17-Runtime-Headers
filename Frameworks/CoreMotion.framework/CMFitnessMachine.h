
@interface CMFitnessMachine : NSObject {
    CMFitnessMachineInternal * _internal;
}

@property (nonatomic, readonly) CMFitnessMachineInternal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (void)feedFitnessMachineData:(id)arg1;
- (id)init;

@end
