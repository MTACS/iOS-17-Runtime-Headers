
@interface HapticDictionaryWriter : NSObject {
    unsigned long long  _urlIndex;
}

- (id)eventParamsToArray:(id)arg1;
- (id)eventToDictionary:(id)arg1 embeddedResourceInfo:(id)arg2;
- (id)paramCurveControlPointsToArray:(id)arg1;
- (id)paramCurveToDictionary:(id)arg1;
- (id)paramToDictionary:(id)arg1;
- (id)patternToDictionary:(id)arg1 events:(id)arg2 parameters:(id)arg3 parameterCurves:(id)arg4 embeddedResourceInfo:(id)arg5 configuration:(id)arg6;

@end
