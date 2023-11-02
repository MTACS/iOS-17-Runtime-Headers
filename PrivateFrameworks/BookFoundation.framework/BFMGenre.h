
@interface BFMGenre : BCMResource {
    void name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *parentId;
@property (nonatomic, readonly) NSString *parentName;

+ (long long)type;

- (void).cxx_destruct;
- (id)name;
- (id)parentId;
- (id)parentName;

@end
