
@interface SWLocation : NSObject <SWLocation> {
    NSURL * _URL;
    NSString * _context;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContext:(id)arg1 URL:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
