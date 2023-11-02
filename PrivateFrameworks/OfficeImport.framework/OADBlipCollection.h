
@interface OADBlipCollection : NSObject {
    NSMutableArray * mBlips;
}

@property (nonatomic, retain) NSMutableArray *blips;

- (void).cxx_destruct;
- (unsigned int)addBlip:(id)arg1;
- (id)blipAtIndex:(int)arg1;
- (unsigned int)blipCount;
- (id)blips;
- (id)init;
- (void)setBlips:(id)arg1;

@end
