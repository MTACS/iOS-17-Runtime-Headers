
@interface SSDownloadPolicy : NSObject <NSCopying, NSSecureCoding, SSXPCCoding> {
    long long  _bagType;
    NSString * _downloadKind;
    NSMutableArray * _policyRules;
}

@property (nonatomic, readonly) long long URLBagType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *downloadKind;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *policyRules;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (bool)supportsSecureCoding;

- (long long)URLBagType;
- (id)_policyRuleForSizeLimit:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadKind;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadKind:(id)arg1 URLBagType:(long long)arg2;
- (id)initWithNetworkConstraints:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)policyRules;
- (void)setPolicyRule:(id)arg1;
- (void)setPolicyRules:(id)arg1;
- (void)unionNetworkConstraints:(id)arg1;
- (void)unionPolicyRule:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)vui_policyAllowingCellularDownloads:(bool)arg1;

@end
