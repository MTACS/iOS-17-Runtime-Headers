
@interface ICASContextPathData : NSObject <AADataEventType> {
    ICASContextPath * _contextPath;
}

@property (nonatomic, readonly) ICASContextPath *contextPath;

+ (id)dataName;

- (void).cxx_destruct;
- (id)contextPath;
- (id)initWithContextPath:(id)arg1;
- (id)toDict;

@end
