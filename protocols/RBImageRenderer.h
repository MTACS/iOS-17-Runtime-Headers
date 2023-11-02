
@protocol RBImageRenderer <NSObject>

@required

- (struct CGImage { }*)renderImageInRect:(void *)arg1 options:(void *)arg2 renderer:(void *)arg3; // needs 3 arg types, found 8: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RBDisplayList *, void*
- (void)renderImageInRect:(void *)arg1 options:(void *)arg2 renderer:(void *)arg3 completionQueue:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 15: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RBDisplayList *, void*, NSObject<OS_dispatch_queue> *, id /* block */, void*, void, id /* block */, struct CGImage { }*, void*

@end
