
@interface PGTitleTuple : NSObject {
    NSArray * _locationNames;
    PGTitle * _subtitle;
    PGTitle * _title;
}

@property (nonatomic, readonly) NSArray *locationNames;
@property (nonatomic, readonly) PGTitle *subtitle;
@property (nonatomic, readonly) PGTitle *title;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)locationNames;
- (id)subtitle;
- (id)title;

@end
