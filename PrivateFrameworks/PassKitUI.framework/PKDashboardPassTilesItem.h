
@interface PKDashboardPassTilesItem : NSObject <PKDashboardItem> {
    PKPass * _pass;
    NSArray * _tiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tiles;

+ (id)identifier;

- (void).cxx_destruct;
- (id)pass;
- (void)setPass:(id)arg1;
- (void)setTiles:(id)arg1;
- (id)tiles;

@end
