
@interface CGRemotePDFPageProxy : NSObject {
    <CGRemotePDFPageProtocol> * _asyncProxy;
    <CGRemotePDFPageProtocol> * _syncProxy;
}

@property (readonly) NSUUID *identifier;
@property (readonly) NSString *pageText;
@property (readonly) long long rotation;

- (void).cxx_destruct;
- (void)drawWithBox:(int)arg1 size:(struct CGSize { double x1; double x2; })arg2 colorSpace:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (id)identifier;
- (id)initWithRemotePage:(id)arg1;
- (id)pageText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForBox:(int)arg1;
- (long long)rotation;

@end
