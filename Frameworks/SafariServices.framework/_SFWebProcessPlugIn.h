
@interface _SFWebProcessPlugIn : WBSWebProcessPlugIn {
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _javaScriptConsoleOutputFile;
}

- (void)_installUIClientIfNecessaryWithPageController:(id)arg1;
- (void)dealloc;
- (void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageControllerWithBrowserContextController:(id)arg1;
- (void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2;
- (void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2;

@end
