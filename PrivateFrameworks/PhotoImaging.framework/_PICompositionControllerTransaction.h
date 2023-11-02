
@interface _PICompositionControllerTransaction : NSObject <PICompositionControllerDelegate> {
    NSMutableSet * _changes;
    unsigned long long  _count;
}

@property (nonatomic, readonly, copy) NSArray *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)begin;
- (id)changes;
- (bool)commit;
- (void)didAddAdjustment:(id)arg1;
- (void)didRemoveAdjustment:(id)arg1;
- (void)didUpdateAdjustment:(id)arg1;
- (void)didUpdateAdjustments:(id)arg1;
- (id)init;

@end
