
@interface UARPAccessoryMetadata : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _accessoryCapability;
    unsigned long long  _accessoryCategoryNumber;
    NSURL * _accessoryInstallationGuideURL;
    NSString * _accessoryMarketingName;
    NSString * _accessoryModel;
    NSString * _accessoryProductLabel;
    NSString * _companyLegalName;
    NSString * _companyPreferredName;
    NSString * _manufacturerAppBundleID;
    NSString * _manufacturerAppStoreID;
    NSString * _manufacturerName;
    NSString * _productGroup;
    NSString * _productNumber;
    NSString * _vendorName;
}

@property unsigned long long accessoryCapability;
@property unsigned long long accessoryCategoryNumber;
@property (copy) NSURL *accessoryInstallationGuideURL;
@property (copy) NSString *accessoryMarketingName;
@property (copy) NSString *accessoryModel;
@property (copy) NSString *accessoryProductLabel;
@property (copy) NSString *companyLegalName;
@property (copy) NSString *companyPreferredName;
@property (copy) NSString *manufacturerAppBundleID;
@property (copy) NSString *manufacturerAppStoreID;
@property (copy) NSString *manufacturerName;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accessoryCapability;
- (unsigned long long)accessoryCategoryNumber;
- (id)accessoryInstallationGuideURL;
- (id)accessoryMarketingName;
- (id)accessoryModel;
- (id)accessoryProductLabel;
- (id)companyLegalName;
- (id)companyPreferredName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2;
- (id)manufacturerAppBundleID;
- (id)manufacturerAppStoreID;
- (id)manufacturerName;
- (id)productGroup;
- (id)productNumber;
- (void)setAccessoryCapability:(unsigned long long)arg1;
- (void)setAccessoryCategoryNumber:(unsigned long long)arg1;
- (void)setAccessoryInstallationGuideURL:(id)arg1;
- (void)setAccessoryMarketingName:(id)arg1;
- (void)setAccessoryModel:(id)arg1;
- (void)setAccessoryProductLabel:(id)arg1;
- (void)setCompanyLegalName:(id)arg1;
- (void)setCompanyPreferredName:(id)arg1;
- (void)setManufacturerAppBundleID:(id)arg1;
- (void)setManufacturerAppStoreID:(id)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)vendorName;

@end
