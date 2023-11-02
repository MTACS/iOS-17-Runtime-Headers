
@interface CNUIContainerContext : NSObject {
    NSDictionary * _originalContainers;
    NSArray * _selectedContainers;
}

@property (nonatomic, readonly) NSArray *addedContainers;
@property (nonatomic, retain) NSDictionary *originalContainers;
@property (nonatomic, readonly) NSDictionary *removedContainers;
@property (nonatomic, retain) NSArray *selectedContainers;

- (void).cxx_destruct;
- (void)addContainer:(id)arg1;
- (id)addedContainers;
- (id)initWithContainers:(id)arg1;
- (id)originalContainers;
- (id)persistedContainers;
- (void)removeContainer:(id)arg1;
- (id)removedContainers;
- (void)resetToInitialState;
- (id)selectedContainers;
- (void)setOriginalContainers:(id)arg1;
- (void)setSelectedContainers:(id)arg1;

@end
