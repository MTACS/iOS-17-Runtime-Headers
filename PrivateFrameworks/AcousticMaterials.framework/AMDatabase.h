
@interface AMDatabase : NSObject

+ (id)acousticParameters:(id)arg1 forMaterialName:(id)arg2 error:(out id*)arg3;
+ (id)acousticParameters:(id)arg1 forSemanticLabels:(id)arg2 error:(out id*)arg3;
+ (bool)checkDatabaseReadAccess:(out id*)arg1;
+ (bool)closeDatabase:(out id*)arg1;
+ (id)labelsForSemanticType:(id)arg1 error:(out id*)arg2;
+ (id)materialNamesForAcousticParameterType:(id)arg1 error:(out id*)arg2;
+ (bool)openDatabase:(out id*)arg1;
+ (bool)openDatabaseWithAcousticParameterFilter:(unsigned long long)arg1 error:(out id*)arg2;

@end
