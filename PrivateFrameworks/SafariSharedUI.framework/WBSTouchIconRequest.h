
@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest> {
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumIconSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumIconSize;
    NSString * _monogramTitle;
    unsigned long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumIconSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumIconSize;
@property (nonatomic, readonly, copy) NSString *monogramTitle;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeForDrawing;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4 options:(unsigned long long)arg5;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4 options:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumIconSize;
- (struct CGSize { double x1; double x2; })minimumIconSize;
- (id)monogramTitle;
- (unsigned long long)options;
- (struct CGSize { double x1; double x2; })sizeForDrawing;
- (id)uniqueIdentifier;

@end
