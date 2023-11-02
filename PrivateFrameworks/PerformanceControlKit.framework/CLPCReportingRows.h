
@interface CLPCReportingRows : NSObject {
    NSArray * _rows;
    CLPCReportingSchema * _schema;
}

@property (nonatomic, retain) NSArray *rows;
@property (nonatomic, retain) CLPCReportingSchema *schema;

- (void).cxx_destruct;
- (id)init;
- (id)rows;
- (id)schema;
- (void)setRows:(id)arg1;
- (void)setSchema:(id)arg1;

@end
