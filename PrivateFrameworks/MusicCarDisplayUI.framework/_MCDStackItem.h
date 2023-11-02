
@interface _MCDStackItem : NSObject {
    NSString * _identifier;
    NSIndexPath * _indexPath;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;

+ (id)stackItemWithContainer:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)indexPath;

@end
