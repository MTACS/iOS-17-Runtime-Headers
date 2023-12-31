
@interface CSVMapper : CMMapper {
    unsigned long long  mColumnCount;
    NSString * mFileName;
    struct CGSize { 
        double width; 
        double height; 
    }  mPageSize;
    NSMutableArray * mRows;
}

- (void).cxx_destruct;
- (id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned long long)arg3 archiver:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGSize { double x1; double x2; })pageSize;

@end
