
@interface ABPKMLModelConfiguration3DLiftingLSTM : ABPKMLModelConfiguration {
    NSString * _mlModelPath;
}

- (void).cxx_destruct;
- (id)compiledMLModelPath;
- (id)init;
- (id)inputCellStateTensorNames;
- (id)inputHiddenStateTensorNames;
- (id)inputPose2dTensorNames;
- (id)inputTensorNames;
- (id)outputPose3dTensorNames;
- (id)outputTensorNames;
- (id)outputToCellStateTensorNames;
- (id)outputToHiddenStateTensorNames;

@end
