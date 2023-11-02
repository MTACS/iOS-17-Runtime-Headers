
@interface TUContactsDataProviderAppleCareHandles : NSObject {
    NSSet * _appleCareHandles;
}

@property (nonatomic, readonly, copy) NSSet *appleCareHandles;

- (void).cxx_destruct;
- (id)appleCareHandles;
- (bool)contains:(id)arg1;
- (id)init;
- (void)loadHandles;

@end
