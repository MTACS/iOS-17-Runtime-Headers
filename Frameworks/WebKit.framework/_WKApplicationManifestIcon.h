
@interface _WKApplicationManifestIcon : NSObject <NSSecureCoding> {
    NSArray * _purposes;
    NSArray * _sizes;
    NSURL * _src;
    NSString * _type;
}

@property (nonatomic, readonly) NSArray *purposes;
@property (nonatomic, readonly, copy) NSArray *sizes;
@property (nonatomic, readonly, copy) NSURL *src;
@property (nonatomic, readonly, copy) NSString *type;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreIcon:(const void*)arg1;
- (id)purposes;
- (id)sizes;
- (id)src;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (id)safari_dictionaryRepresentation;

@end
