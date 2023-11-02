
@interface AAGroup : NSObject {
    void contentType;
    void count;
    void name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)init;
- (id)name;
- (id)startDate;

@end
