
@interface VCPFaceIDModel : NSObject

+ (id)_loadModelAtPath:(id)arg1 error:(id*)arg2;
+ (id)_loadPetsModelAtPath:(id)arg1 error:(id*)arg2;
+ (bool)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4;
+ (id)animalObservationFromAnimalprintData:(id)arg1;
+ (id)classifyAnimalObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3;
+ (id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3;
+ (id)faceObservationFromFaceprintData:(id)arg1;
+ (id)loadVIPModelAtPath:(id)arg1 withVIPType:(unsigned long long)arg2 error:(id*)arg3;
+ (id)newMutablePersonsModel;
+ (bool)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
+ (bool)persistPetsModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
+ (id)personVIPModelFileName;
+ (float)petClassificationThreshold;
+ (id)petVIPModelFileName;

@end
