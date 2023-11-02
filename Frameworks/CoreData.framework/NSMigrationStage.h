
@interface NSMigrationStage : NSObject {
    NSString * _label;
}

@property (nonatomic, copy) NSString *label;

- (void)dealloc;
- (id)init;
- (id)label;
- (void)setLabel:(id)arg1;

@end
