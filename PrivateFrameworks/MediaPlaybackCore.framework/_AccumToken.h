
@interface _AccumToken : NSObject {
    NSIndexPath * _indexPath;
    id  _lodToken;
    id  _sodToken;
}

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, retain) id lodToken;
@property (nonatomic, retain) id sodToken;

+ (id)tokenWithIndexPath:(id)arg1 sod:(id)arg2 lod:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)indexPath;
- (bool)isEmpty;
- (id)lodToken;
- (void)setIndexPath:(id)arg1;
- (void)setLodToken:(id)arg1;
- (void)setSodToken:(id)arg1;
- (id)sodToken;

@end
