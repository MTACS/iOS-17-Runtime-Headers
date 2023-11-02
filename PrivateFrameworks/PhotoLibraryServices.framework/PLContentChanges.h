
@interface PLContentChanges : NSObject {
    NSMutableArray * _container;
    NSMutableArray * _updatedContent;
}

@property (nonatomic, retain) NSMutableArray *container;
@property (nonatomic, retain) NSMutableArray *updatedContent;

- (void).cxx_destruct;
- (void)cleanupState;
- (id)container;
- (void)setContainer:(id)arg1;
- (void)setUpdatedContent:(id)arg1;
- (id)updatedContent;

@end
