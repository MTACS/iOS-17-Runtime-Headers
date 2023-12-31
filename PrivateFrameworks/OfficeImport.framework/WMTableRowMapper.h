
@interface WMTableRowMapper : CMMapper {
    double  mHeight;
    WDTableRow * mWdTableRow;
}

+ (bool)isTableRowDeleted:(id)arg1;

- (void).cxx_destruct;
- (double)height;
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setRowProperties:(id)arg1;

@end
