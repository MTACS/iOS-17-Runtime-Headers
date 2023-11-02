
@interface BLDownloadManifestRequest : BLRequest <NSSecureCoding> {
    NSURLRequest * _urlRequest;
}

@property (nonatomic, retain) NSURLRequest *URLRequest;

// Image: /System/Library/PrivateFrameworks/BookLibraryCore.framework/BookLibraryCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)startWithManifestResponseBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary

- (void)startWithUIManager:(id)arg1 manifestResponseBlock:(id /* block */)arg2;

@end
