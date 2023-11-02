
@protocol MIOModeling <NSObject, NSCopying>

@required

- (void*)irProgram;
- (NSDictionary *)layerHistogram;
- (NSArray *)layers;
- (MIOModelDescription *)modelDescription;
- (NSString *)modelTypeName;
- (void)setModelDescription:(MIOModelDescription *)arg1;
- (MIOVersionInfo *)specificationVersion;
- (NSArray *)subModels;
- (bool)writeToURL:(NSURL *)arg1 error:(id*)arg2;

@end
