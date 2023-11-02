
@interface SMContributor : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  contributor;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)name;

@end
