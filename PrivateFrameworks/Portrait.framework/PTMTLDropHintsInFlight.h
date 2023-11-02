
@interface PTMTLDropHintsInFlight : NSObject {
    NSMutableArray * _activeGroups;
}

+ (id)instance:(id)arg1;

- (void).cxx_destruct;
- (void)_addResourceGroup:(id)arg1 toCommandBuffer:(id)arg2;
- (void)_dropResourceGroup:(id)arg1 fromCommandBuffer:(id)arg2;
- (int)checkForUnreleasedDrophints;
- (id)init;
- (void)setActiveResourceGroups:(id)arg1;

@end
