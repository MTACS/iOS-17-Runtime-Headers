
@interface IntelligencePlatformCore.ViewAccessRequester : NSObject <GDViewAccessRequester> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  artifactURL;
    void viewDb;
}

- (void).cxx_destruct;
- (id)init;
- (id)requestAssertionForViewName:(id)arg1 error:(id*)arg2;

@end
