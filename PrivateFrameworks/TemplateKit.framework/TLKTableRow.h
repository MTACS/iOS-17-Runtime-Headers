
@interface TLKTableRow : TLKObject {
    NSArray * _data;
    bool  _isSubHeader;
}

@property (nonatomic, retain) NSArray *data;
@property (nonatomic) bool isSubHeader;

- (void).cxx_destruct;
- (id)data;
- (bool)isSubHeader;
- (void)setData:(id)arg1;
- (void)setIsSubHeader:(bool)arg1;

@end
