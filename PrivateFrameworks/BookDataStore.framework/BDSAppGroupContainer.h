
@interface BDSAppGroupContainer : NSObject

+ (id)containerIdentifier;
+ (id)containerURL;
+ (id)documentsURL;
+ (bool)isUnitTesting;
+ (void)setUnitTesting:(bool)arg1;

@end
