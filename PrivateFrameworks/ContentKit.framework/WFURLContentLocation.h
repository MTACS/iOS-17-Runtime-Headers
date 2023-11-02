
@interface WFURLContentLocation : WFContentLocation <NSCopying, NSSecureCoding, WFSerializableContent> {
    bool  _allowsAnyHostname;
    NSSet * _hostnames;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) bool allowsAnyHostname;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *hostnames;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)evernoteLocation;
+ (id)giphyLocation;
+ (id)imgurLocation;
+ (id)instapaperLocation;
+ (id)invalidHostnameErrorForInputURL:(id)arg1;
+ (id)locationMatchingAnyHostname;
+ (id)locationWithHostname:(id)arg1;
+ (id)locationWithHostnames:(id)arg1;
+ (id)locationWithURL:(id)arg1 error:(id*)arg2;
+ (id)locationWithURLs:(id)arg1 error:(id*)arg2;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)pinboardLocation;
+ (id)pocketLocation;
+ (bool)supportsSecureCoding;
+ (id)todoistLocation;
+ (id)trelloLocation;
+ (id)tumblrLocation;
+ (id)wordpressLocation;

- (void).cxx_destruct;
- (bool)allowsAnyHostname;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostnames;
- (id)hostnamesSortedAlphabetically;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostnames:(id)arg1;
- (id)initWithHostnames:(id)arg1 allowsAnyHostname:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (unsigned long long)managedLevel;
- (bool)matches:(id)arg1;
- (id)wfSerializedRepresentation;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)icon;

@end
