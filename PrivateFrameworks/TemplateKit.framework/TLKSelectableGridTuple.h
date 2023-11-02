
@interface TLKSelectableGridTuple : TLKObject {
    double  _size;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) double size;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (id)tupleWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)tuplesForTitles:(id)arg1 subtitles:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)setSize:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (double)size;
- (id)subtitle;
- (id)title;

@end
