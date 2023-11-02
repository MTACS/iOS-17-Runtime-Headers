
@interface NSURLResponseInternal : NSObject {
    struct URLResponse { 
        int (**_vptr$CoreLoggable)(); 
        struct __CFURL {} *fURL; 
        struct __CFString {} *fMIMEType; 
        struct __CFString {} *fTextEncodingName; 
        long long fExpectedContentLength; 
        double fExpiration; 
        double fCreationTime; 
        struct __CFDictionary {} *fDownloadAssessment; 
        struct __CFDictionary {} *fSSLCertContext; 
        int fRecommendedPolicy; 
        struct __CFData {} *fPeerAddress; 
        struct HTTPResponse {} *fHTTP; 
        unsigned char fConnectionDidFallback; 
        unsigned char fConnectionIsCellular; 
    }  _response;
}

@property (readonly) struct URLResponse { int (**x1)(); struct __CFURL {} *x2; struct __CFString {} *x3; struct __CFString {} *x4; long long x5; double x6; double x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; int x10; struct __CFData {} *x11; struct HTTPResponse {} *x12; unsigned char x13; unsigned char x14; }*_inner;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct URLResponse { int (**x1)(); struct __CFURL {} *x2; struct __CFString {} *x3; struct __CFString {} *x4; long long x5; double x6; double x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; int x10; struct __CFData {} *x11; struct HTTPResponse {} *x12; unsigned char x13; unsigned char x14; }*)_inner;
- (void)dealloc;
- (id)init;

@end
