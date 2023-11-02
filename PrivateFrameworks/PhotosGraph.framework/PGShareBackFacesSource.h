
@interface PGShareBackFacesSource : PGShareBackSource {
    NSSet * _childPersonLocalIdentifiers;
    <CLSFaceIdentificationProtocol> * _faceIdentification;
    NSString * _meLocalIdentifier;
    PHPhotoLibrary * _photoLibrary;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2 faceIdentification:(id)arg3;
- (bool)prepareSourceWithGraph:(id)arg1;
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id*)arg4;

@end
