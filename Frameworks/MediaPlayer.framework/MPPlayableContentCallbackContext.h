
@interface MPPlayableContentCallbackContext : NSObject {
    NSIndexPath * _indexPath;
    bool  _serviced;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) bool serviced;

- (void).cxx_destruct;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1;
- (bool)serviced;
- (void)setServiced:(bool)arg1;

@end
